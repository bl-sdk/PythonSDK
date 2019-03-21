#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULocalTrainingMessage()
{
    class_< ULocalTrainingMessage, bases< UWillowLocalMessage >  , boost::noncopyable>("ULocalTrainingMessage", no_init)
        .def_readwrite("DefaultTrainingMessageColor", &ULocalTrainingMessage::DefaultTrainingMessageColor)
        .def("StaticClass", &ULocalTrainingMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetLocalStringForTrainingMessageKey", &ULocalTrainingMessage::GetLocalStringForTrainingMessageKey)
        .def("ClientReceive", &ULocalTrainingMessage::ClientReceive)
        .staticmethod("StaticClass")
  ;
}