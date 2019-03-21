#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UItemPartListDefinition()
{
    class_< UItemPartListDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UItemPartListDefinition", no_init)
        .def_readwrite("VfTable_IIConstructObject", &UItemPartListDefinition::VfTable_IIConstructObject)
        .def_readwrite("WeightedParts", &UItemPartListDefinition::WeightedParts)
        .def_readwrite("ConsolidatedAttributeInitData", &UItemPartListDefinition::ConsolidatedAttributeInitData)
        .def("StaticClass", &UItemPartListDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}