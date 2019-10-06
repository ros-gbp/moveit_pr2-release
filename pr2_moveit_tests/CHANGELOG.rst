^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package pr2_moveit_tests
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

0.7.3 (2019-10-06)
------------------
* Remove KDL plugin test (has changed API in MoveIt)
* Contributors: Robert Haschke

0.7.2 (2019-10-01)
------------------
* [maintenance] Fix travis (`#103 <https://github.com/ros-planning/moveit_pr2/issues/103>`_)
  - Implement kinematics test with a gtest fixture class
  - Fix catkin_lint issues
* Contributors: Robert Haschke

0.7.1 (2019-03-31)
------------------
* adjust tests to Ptr typedefs
* Contributors: v4hn

0.7.0 (2018-04-27)
------------------
* pluginlib headers migration
* Migrate to format2
* Add Bence as maintainer
* Fix xacro warnings
* Fix test compilation
* Fix fcl and kdl dep names
* Contributors: Bence Magyar, Isaac I.Y. Saito

0.6.4 (2017-06-20)
------------------

0.6.3 (2016-06-24)
------------------

0.6.2 (2016-02-05)
------------------

0.6.1 (2015-01-16)
------------------

0.6.0 (2015-01-14)
------------------
* Moved include_directories(catkin_...) ahead of other calls.
* Fix deprecated class loader call, renamed global variables to have _, cleaned up launch files
* Contributors: Dave Coleman, Dave Hershberger

0.5.7 (2014-03-23)
------------------
* update build system for ROS indigo
* Contributors: Ioan Sucan

0.5.6 (2014-02-27)
------------------
* Refactored jacobian test.
* Changed orocos_kdl import from a catkin component to regular package.
* Run tests in Travis builds.
* adding kdl ik solver tests back in
* Contributors: Dave Hershberger, Sachin Chitta

0.5.5 (2014-01-03)
------------------

0.5.4 (2013-12-03)
------------------
* don't need to install this file
* remove installation of launch files
* fixing cmake files and launch file for tests
* fixing broken tests for changes in robot_state

0.5.3 (2013-09-23)
------------------

0.5.2 (2013-08-13)
------------------
* make headers and author definitions aligned the same way; white space fixes

0.5.1 (2013-07-15)
------------------

0.5.0 (2013-07-15)
------------------

0.4.3 (2013-07-12)
------------------
* white space fixes (tabs are now spaces)
