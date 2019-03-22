#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPawnRelevanceUtility(py::module &m)
{
    py::class_< UPawnRelevanceUtility,  UObject   >(m, "UPawnRelevanceUtility")
        .def("StaticClass", &UPawnRelevanceUtility::StaticClass, py::return_value_policy::reference)
          ;
}