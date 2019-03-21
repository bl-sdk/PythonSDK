#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FExposureUpdateStruct(py::object m)
{
    py::class_< FExposureUpdateStruct >(m, "FExposureUpdateStruct")
        .def_readwrite("FromPawn", &FExposureUpdateStruct::FromPawn)
        .def_readwrite("ToActor", &FExposureUpdateStruct::ToActor)
        .def_readwrite("TimeRequested", &FExposureUpdateStruct::TimeRequested)
        .def_readwrite("Exposure", &FExposureUpdateStruct::Exposure)
        .def_readwrite("Vantage", &FExposureUpdateStruct::Vantage)
        .def_readwrite("ShouldRemove", &FExposureUpdateStruct::ShouldRemove)
  ;
}