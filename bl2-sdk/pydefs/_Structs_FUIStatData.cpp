#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUIStatData()
{
    class_< FUIStatData >("FUIStatData", no_init)
        .def_readwrite("AttributeStyle", &FUIStatData::AttributeStyle)
        .def_readwrite("SupplementalAttributeStyle", &FUIStatData::SupplementalAttributeStyle)
        .def_readwrite("StatCombinationMethod", &FUIStatData::StatCombinationMethod)
        .def_readwrite("Attribute", &FUIStatData::Attribute)
        .def_readwrite("ConstraintAttribute", &FUIStatData::ConstraintAttribute)
        .def_readwrite("SupplementalAttributeExpression", &FUIStatData::SupplementalAttributeExpression)
        .def_readwrite("SupplementalAttributeToAppend", &FUIStatData::SupplementalAttributeToAppend)
  ;
}