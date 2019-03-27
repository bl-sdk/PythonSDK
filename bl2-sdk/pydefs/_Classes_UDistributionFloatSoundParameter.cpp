#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionFloatSoundParameter(py::module &m)
{
    py::class_< UDistributionFloatSoundParameter,  UDistributionFloatParameterBase   >(m, "UDistributionFloatSoundParameter")
		.def_static("StaticClass", &UDistributionFloatSoundParameter::StaticClass, py::return_value_policy::reference)
          ;
}