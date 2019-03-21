#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUIStatData()
{
    py::class_< FUIStatData >("FUIStatData")
        .def_readwrite("AttributeStyle", &FUIStatData::AttributeStyle)
        .def_readwrite("SupplementalAttributeStyle", &FUIStatData::SupplementalAttributeStyle)
        .def_readwrite("StatCombinationMethod", &FUIStatData::StatCombinationMethod)
        .def_readwrite("Attribute", &FUIStatData::Attribute)
        .def_readwrite("ConstraintAttribute", &FUIStatData::ConstraintAttribute)
        .def_readwrite("SupplementalAttributeExpression", &FUIStatData::SupplementalAttributeExpression)
        .def_readwrite("SupplementalAttributeToAppend", &FUIStatData::SupplementalAttributeToAppend)
  ;
}