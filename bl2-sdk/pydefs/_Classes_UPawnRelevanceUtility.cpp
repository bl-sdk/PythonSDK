#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPawnRelevanceUtility(py::module &m)
{
    py::class_< UPawnRelevanceUtility,  UObject   >(m, "UPawnRelevanceUtility")
		.def_static("StaticClass", &UPawnRelevanceUtility::StaticClass, py::return_value_policy::reference)
          ;
}