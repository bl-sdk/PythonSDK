#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FExposureUpdateStruct()
{
    class_< FExposureUpdateStruct >("FExposureUpdateStruct", no_init)
        .def_readwrite("FromPawn", &FExposureUpdateStruct::FromPawn)
        .def_readwrite("ToActor", &FExposureUpdateStruct::ToActor)
        .def_readwrite("TimeRequested", &FExposureUpdateStruct::TimeRequested)
        .def_readwrite("Exposure", &FExposureUpdateStruct::Exposure)
        .def_readwrite("Vantage", &FExposureUpdateStruct::Vantage)
        .def_readwrite("ShouldRemove", &FExposureUpdateStruct::ShouldRemove)
  ;
}