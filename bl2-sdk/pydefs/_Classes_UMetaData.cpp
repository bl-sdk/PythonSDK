#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMetaData(py::module &m)
{
    py::class_< UMetaData,  UObject   >(m, "UMetaData")
		.def_static("StaticClass", &UMetaData::StaticClass, py::return_value_policy::reference)
          ;
}