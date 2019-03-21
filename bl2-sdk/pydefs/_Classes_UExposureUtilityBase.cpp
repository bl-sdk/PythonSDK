#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExposureUtilityBase(py::object m)
{
    py::class_< UExposureUtilityBase,  UObject   >(m, "UExposureUtilityBase")
        .def_readwrite("ExposureStrategy", &UExposureUtilityBase::ExposureStrategy)
        .def("StaticClass", &UExposureUtilityBase::StaticClass, py::return_value_policy::reference)
        .def("CalculateVantageToPoint", &UExposureUtilityBase::CalculateVantageToPoint)
        .def("CalculateTargetExposure", &UExposureUtilityBase::CalculateTargetExposure)
          ;
}