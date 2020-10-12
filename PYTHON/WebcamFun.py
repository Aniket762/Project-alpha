import cv2
import numpy as np
import pyautogui

cap = cv2.VideoCapture(0)

# red_lower = np.array([155,25,0])
# red_upper = np.array([179,255,255])

yellow_lower = np.array([22, 93, 0])
yellow_upper = np.array([45, 255, 255])

prev_y = 0

while True:
    ret,frame = cap.read()
    hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
    mask = cv2.inRange(hsv, yellow_lower, yellow_upper)
    contours, hierarchy = cv2.findContours(mask, cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_SIMPLE)
    for c in contours:
        area = cv2.contourArea(c)
        if area > 800:
            x, y, w, h = cv2.boundingRect(c)
            cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)
            if y > prev_y:
                pyautogui.scroll(-100)
            # elif y < prev_y:
            #     pyautogui.scroll(100)
            prev_y = y
    cv2.imshow('Frame', frame)
    if cv2.waitKey(10) == ord('q'):
        break
    
cap.release()
cv2.destroyAllWindows()
