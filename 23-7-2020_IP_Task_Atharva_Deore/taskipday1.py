import cv2
img=cv2.imread(r'C:\Users\sony\Desktop\opencv-master\TRF_IP_day1\Day 1\Task Image\text.jpg',1)
img_gray=cv2.cvtColor(img,cv2.COLOR_RGB2GRAY)
img_hsv=cv2.cvtColor(img,cv2.COLOR_RGB2HSV)
cv2.imshow('original',img)
img_new=cv2.resize(img,(500,500))
cv2.imshow('resize',img_new)
#cv2.imshow('hsv',img_hsv)
cv2.imshow('gray',img_gray)
print('size=',img.size,'\nshape=',img.shape)
print('size=',img_new.size,'\nshape=',img_new.shape)
img_gray1=cv2.resize(img_gray,(600,600))
ret,thresh_bin=cv2.threshold(img_gray1,147,255,cv2.THRESH_BINARY)
ret,thresh_bin_inv=cv2.threshold(img_gray1,147,255,cv2.THRESH_BINARY_INV)
adptmean=cv2.adaptiveThreshold(img_gray1,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,5,3)
adptgaussian=cv2.adaptiveThreshold(img_gray1,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,5,3)
cv2.imshow('thresh_bin',thresh_bin)
cv2.imshow('thresh_bin_inv',thresh_bin_inv)
cv2.imshow('adptmean',adptmean)
cv2.imshow('adptgaussian',adptgaussian)
cv2.imwrite(r'C:\Users\sony\Desktop\opencv-master\TRF_IP_day1\Day 1\Task Image\gray.jpg',img_gray1)
cv2.imwrite(r'C:\Users\sony\Desktop\opencv-master\TRF_IP_day1\Day 1\Task Image\hsv.jpg',img_hsv)
cv2.imwrite(r'C:\Users\sony\Desktop\opencv-master\TRF_IP_day1\Day 1\Task Image\bin.jpg',thresh_bin)
cv2.imwrite(r'C:\Users\sony\Desktop\opencv-master\TRF_IP_day1\Day 1\Task Image\bininv.jpg',thresh_bin_inv)
cv2.imwrite(r'C:\Users\sony\Desktop\opencv-master\TRF_IP_day1\Day 1\Task Image\adptmean.jpg',adptmean)
cv2.imwrite(r'C:\Users\sony\Desktop\opencv-master\TRF_IP_day1\Day 1\Task Image\adptgauss.jpg',adptgaussian)
cv2.waitKey(0)
cv2.destroyAllWindows()