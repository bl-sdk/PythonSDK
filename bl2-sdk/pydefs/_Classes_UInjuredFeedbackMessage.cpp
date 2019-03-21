#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInjuredFeedbackMessage()
{
    class_< UInjuredFeedbackMessage, bases< UWillowLocalMessage >  , boost::noncopyable>("UInjuredFeedbackMessage", no_init)
        .def_readwrite("SecondWind", &UInjuredFeedbackMessage::SecondWind)
        .def("StaticClass", &UInjuredFeedbackMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetString", &UInjuredFeedbackMessage::GetString)
        .staticmethod("StaticClass")
  ;
}