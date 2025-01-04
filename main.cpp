#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int main() {

    VideoCapture video(0);
    Mat img; //mat is for matrix
    CascadeClassifier Detection;
    Detection.load("haarcascade_frontalface_default.xml");



    while (true) {
        video.read(img);

        vector<Rect> faces;

        Detection.detectMultiScale(img,faces,1.3,5);

       // cout<<faces.size()<<endl;


        for(int i =0; i<faces.size(); i++) {
            rectangle(img, faces[i].tl(), faces[i].br(), Scalar(0, 255, 0),3);
            rectangle(img, Point(0,0), Point(250,70), Scalar(50, 50, 255),FILLED);
            putText(img, to_string(faces.size())+" Faces Detected!",Point(10,40), FONT_HERSHEY_PLAIN,1 ,Scalar(255,255,255),1);
        }

        imshow("Frame",img);
        waitKey(1);
    }

    return 0;
}

