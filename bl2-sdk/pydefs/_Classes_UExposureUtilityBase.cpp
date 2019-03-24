#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExposureUtilityBase(py::module &m)
{
    py::class_< UExposureUtilityBase,  UObject   >(m, "UExposureUtilityBase")
		.def_static("StaticClass", &UExposureUtilityBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ExposureStrategy", &UExposureUtilityBase::ExposureStrategy)
        .def("CalculateVantageToPoint", &UExposureUtilityBase::CalculateVantageToPoint)
        .def("CalculateTargetExposure", &UExposureUtilityBase::CalculateTargetExposure)
          ;
}