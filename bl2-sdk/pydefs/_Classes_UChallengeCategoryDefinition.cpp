#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UChallengeCategoryDefinition(py::module &m)
{
    py::class_< UChallengeCategoryDefinition,  UGBXDefinition   >(m, "UChallengeCategoryDefinition")
        .def_readwrite("CategoryName", &UChallengeCategoryDefinition::CategoryName)
        .def_readwrite("SortWeight", &UChallengeCategoryDefinition::SortWeight)
        .def("StaticClass", &UChallengeCategoryDefinition::StaticClass, py::return_value_policy::reference)
          ;
}