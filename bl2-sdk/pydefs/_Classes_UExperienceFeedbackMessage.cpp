#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UExperienceFeedbackMessage()
{
    class_< UExperienceFeedbackMessage, bases< ULocalMessage >  , boost::noncopyable>("UExperienceFeedbackMessage", no_init)
        .def_readwrite("IsNowLevel", &UExperienceFeedbackMessage::IsNowLevel)
        .def("StaticClass", &UExperienceFeedbackMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetMsgType", &UExperienceFeedbackMessage::GetMsgType)
        .def("GetString", &UExperienceFeedbackMessage::GetString)
        .staticmethod("StaticClass")
  ;
}