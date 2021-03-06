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

/** @file collectorRobot.hpp
 *  @brief Definition of class collectorRobot
 *
 *  This file contains definitions of class collectorRobot 
 *
 *  @author Yi-ting Lei
 *  @date   05/10/2017
*/

#ifndef INCLUDE_COLLECTORROBOT_HPP_
#define INCLUDE_COLLECTORROBOT_HPP_

#include <ros/ros.h>
#include <std_msgs/String.h>


/**
 *  @brief Class definition of collectorRobot class
*/

class collectorRobot {
 public:
     /**
      *   @brief  Initialize collectorRobot to subscribe/publish topics
      *
      *   @param  ros node handle
      *   @return none
     */
     void initialize(ros::NodeHandle &);

 private:
     ros::NodeHandle nodeHandle;         ///< ros node handle
     ros::Subscriber getCoord;

     bool ballsToCollect;

     void calculateRelationWithCorner();
     void goToBackOfTheBall();
};

#endif  // INCLUDE_COLLECTORROBOT_HPP_
