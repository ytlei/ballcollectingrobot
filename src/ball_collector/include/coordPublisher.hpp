/********************************************************************
 *   MIT License
 *  
 *   Copyright (c) 2017 Yi-ting Lei
 *  
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *  
 *  The above copyright notice and this permission notice shall be included in all
 *  copies or substantial portions of the Software.
 *  
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *  SOFTWARE.
 ********************************************************************/

/** @file coordPublisher.hpp
 *  @brief Definition of class collectorRobot
 *
 *  This file contains definitions of class collectorRobot 
 *
 *  @author Yi-ting Lei
 *  @date   05/10/2017
*/


#ifndef SRC_BALL_COLLECTOR_INCLUDE_COORDPUBLISHER_HPP_
#define SRC_BALL_COLLECTOR_INCLUDE_COORDPUBLISHER_HPP_

#include <ros/ros.h>
#include <std_msgs/String.h>
#include <string>

/**
 *  @brief Class definition of coordPublisher class
*/
class coordPublisher {
 public:
     class ballCoord coord{
        double x;
        double y;
     };
     void initialize(ros::NodeHandle &);

 private:
     ros::Publisher coordPub;
     /**
      *   @brief  newCoord callback publish new coordinate 
      *           of the next ball
      *
      *   @param  
      *   @return none
     */
     void newCoord();
};

#endif  // SRC_BALL_COLLECTOR_INCLUDE_COORDPUBLISHER_HPP_
