#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_Deproject()
{
    class_< USeqAct_Deproject, bases< USequenceAction >  , boost::noncopyable>("USeqAct_Deproject", no_init)
        .def_readwrite("ScreenX", &USeqAct_Deproject::ScreenX)
        .def_readwrite("ScreenY", &USeqAct_Deproject::ScreenY)
        .def_readwrite("TraceDistance", &USeqAct_Deproject::TraceDistance)
        .def_readwrite("HitObject", &USeqAct_Deproject::HitObject)
        .def_readwrite("HitLocation", &USeqAct_Deproject::HitLocation)
        .def_readwrite("HitNormal", &USeqAct_Deproject::HitNormal)
        .def("StaticClass", &USeqAct_Deproject::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}