#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_TrainingMessage()
{
    class_< USeqEvent_TrainingMessage, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_TrainingMessage", no_init)
        .def_readwrite("TrainingMessageDefinition", &USeqEvent_TrainingMessage::TrainingMessageDefinition)
        .def("StaticClass", &USeqEvent_TrainingMessage::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}