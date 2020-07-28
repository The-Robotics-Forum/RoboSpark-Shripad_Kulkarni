# Importing Libraries
import cv2
import numpy as np

# Reading the flower image
original = cv2.imread("img/flower.jpg")
resized = cv2.resize(original, (400, 267))
cv2.imwrite('output/resized.jpg', resized)

# Setting upper and lower bounds for masking the image
bgrl = np.array([0, 0, 178], np.uint8)
bgrh = np.array([255, 255, 255], np.uint8)

# Masking Image
masked = cv2.inRange(resized, bgrl, bgrh)

# Initializing Kernel
kernel = np.array(([3, 2, 6], [5, 7, 8], [2, 4, 8]), np.uint8)

# Applying Blurring Techniques on mask image
blurred = cv2.filter2D(resized, -1, kernel)
avg = cv2.blur(resized, (5, 5))
gaus_blur = cv2.GaussianBlur(resized, (5, 5), 0)
median = cv2.medianBlur(resized, 7)
bilateral = cv2.bilateralFilter(resized, 5, 111, 111)


cv2.imshow("Original", original)
cv2.imshow("Resized", resized)

# Drawing Ellipse
cv2.ellipse(resized, (180, 125), (160, 110), 0, 0, 360, (0, 0, 255), 2)

# Adding Text
cv2.putText(resized, 'Yellow Flower', (100, 260), cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 0, 255), 2,
            cv2.LINE_AA)

# Displaying all Images
cv2.imshow("Masked", masked)
cv2.imshow("Blurred", blurred)
cv2.imshow("Averaging", avg)
cv2.imshow("Gausian Blur", gaus_blur)
cv2.imshow("Median Blur", median)
cv2.imshow("Bilateral", bilateral)
cv2.imshow("Last Image", resized)

# Saving Images
cv2.imwrite('output/masked.jpg', masked)
cv2.imwrite('output/blurred.jpg', blurred)
cv2.imwrite('output/average.jpg', avg)
cv2.imwrite('output/gaussian.jpg', gaus_blur)
cv2.imwrite('output/median.jpg', median)
cv2.imwrite('output/bilateral.jpg', bilateral)
cv2.imwrite('output/last.jpg', resized)

# Initializing Wait Key
cv2.waitKey(0)
cv2.destroyAllWindows()
