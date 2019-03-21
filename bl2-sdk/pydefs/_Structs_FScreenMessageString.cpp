#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FScreenMessageString()
{
    class_< FScreenMessageString >("FScreenMessageString", no_init)
        .def_readwrite("Key", &FScreenMessageString::Key)
        .def_readwrite("ScreenMessage", &FScreenMessageString::ScreenMessage)
        .def_readwrite("DisplayColor", &FScreenMessageString::DisplayColor)
        .def_readwrite("TimeToDisplay", &FScreenMessageString::TimeToDisplay)
        .def_readwrite("CurrentTimeDisplayed", &FScreenMessageString::CurrentTimeDisplayed)
  ;
}