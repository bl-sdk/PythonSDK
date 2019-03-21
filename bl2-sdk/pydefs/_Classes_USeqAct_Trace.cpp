#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_Trace()
{
    class_< USeqAct_Trace, bases< USequenceAction >  , boost::noncopyable>("USeqAct_Trace", no_init)
        .def_readwrite("TraceExtent", &USeqAct_Trace::TraceExtent)
        .def_readwrite("StartOffset", &USeqAct_Trace::StartOffset)
        .def_readwrite("EndOffset", &USeqAct_Trace::EndOffset)
        .def_readwrite("HitObject", &USeqAct_Trace::HitObject)
        .def_readwrite("Distance", &USeqAct_Trace::Distance)
        .def_readwrite("HitLocation", &USeqAct_Trace::HitLocation)
        .def("StaticClass", &USeqAct_Trace::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_Trace::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}