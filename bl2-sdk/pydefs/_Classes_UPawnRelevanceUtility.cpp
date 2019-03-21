#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPawnRelevanceUtility()
{
    py::class_< UPawnRelevanceUtility,  UObject   >("UPawnRelevanceUtility")
        .def("StaticClass", &UPawnRelevanceUtility::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}