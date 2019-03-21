#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_DisplayTrainingDefinitionMessage()
{
    class_< USeqAct_DisplayTrainingDefinitionMessage, bases< USequenceAction >  , boost::noncopyable>("USeqAct_DisplayTrainingDefinitionMessage", no_init)
        .def_readwrite("Duration", &USeqAct_DisplayTrainingDefinitionMessage::Duration)
        .def("StaticClass", &USeqAct_DisplayTrainingDefinitionMessage::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}