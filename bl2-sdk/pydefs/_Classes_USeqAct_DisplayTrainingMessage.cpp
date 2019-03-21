#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_DisplayTrainingMessage()
{
    class_< USeqAct_DisplayTrainingMessage, bases< USequenceAction >  , boost::noncopyable>("USeqAct_DisplayTrainingMessage", no_init)
        .def_readwrite("Key", &USeqAct_DisplayTrainingMessage::Key)
        .def_readwrite("TitleKey", &USeqAct_DisplayTrainingMessage::TitleKey)
        .def_readwrite("Duration", &USeqAct_DisplayTrainingMessage::Duration)
        .def_readwrite("HUDInitializationFrame", &USeqAct_DisplayTrainingMessage::HUDInitializationFrame)
        .def_readwrite("PauseContinueDelay", &USeqAct_DisplayTrainingMessage::PauseContinueDelay)
        .def("StaticClass", &USeqAct_DisplayTrainingMessage::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}