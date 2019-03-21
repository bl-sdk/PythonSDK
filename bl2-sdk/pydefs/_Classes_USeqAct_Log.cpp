#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_Log()
{
    class_< USeqAct_Log, bases< USequenceAction >  , boost::noncopyable>("USeqAct_Log", no_init)
        .def_readwrite("TargetDuration", &USeqAct_Log::TargetDuration)
        .def_readwrite("TargetOffset", &USeqAct_Log::TargetOffset)
        .def_readwrite("LogMessage", &USeqAct_Log::LogMessage)
        .def("StaticClass", &USeqAct_Log::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_Log::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}