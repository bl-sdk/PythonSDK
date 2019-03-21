#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPendingClientTrainingMessage()
{
    class_< FPendingClientTrainingMessage >("FPendingClientTrainingMessage", no_init)
        .def_readwrite("Message", &FPendingClientTrainingMessage::Message)
        .def_readwrite("TrainingDefinition", &FPendingClientTrainingMessage::TrainingDefinition)
        .def_readwrite("Duration", &FPendingClientTrainingMessage::Duration)
  ;
}