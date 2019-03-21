#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTeleporterFeedbackMessage()
{
    class_< UTeleporterFeedbackMessage, bases< ULocalMessage >  , boost::noncopyable>("UTeleporterFeedbackMessage", no_init)
        .def_readwrite("Teleporter_Disabled", &UTeleporterFeedbackMessage::Teleporter_Disabled)
        .def_readwrite("Teleporter_NoRoom", &UTeleporterFeedbackMessage::Teleporter_NoRoom)
        .def("StaticClass", &UTeleporterFeedbackMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetString", &UTeleporterFeedbackMessage::GetString)
        .staticmethod("StaticClass")
  ;
}