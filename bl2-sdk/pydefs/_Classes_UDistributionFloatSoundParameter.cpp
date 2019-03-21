#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionFloatSoundParameter()
{
    py::class_< UDistributionFloatSoundParameter,  UDistributionFloatParameterBase   >("UDistributionFloatSoundParameter")
        .def("StaticClass", &UDistributionFloatSoundParameter::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}