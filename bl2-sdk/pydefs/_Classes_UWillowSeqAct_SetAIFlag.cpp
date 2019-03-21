#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_SetAIFlag()
{
    class_< UWillowSeqAct_SetAIFlag, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_SetAIFlag", no_init)
        .def_readwrite("FlagDefinition", &UWillowSeqAct_SetAIFlag::FlagDefinition)
        .def("StaticClass", &UWillowSeqAct_SetAIFlag::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}