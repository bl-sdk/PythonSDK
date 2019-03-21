#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUsableItemDefinition()
{
    class_< UUsableItemDefinition, bases< UItemDefinition >  , boost::noncopyable>("UUsableItemDefinition", no_init)
        .def_readwrite("UsedStatId", &UUsableItemDefinition::UsedStatId)
        .def("StaticClass", &UUsableItemDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnUsed", &UUsableItemDefinition::OnUsed)
        .staticmethod("StaticClass")
  ;
}