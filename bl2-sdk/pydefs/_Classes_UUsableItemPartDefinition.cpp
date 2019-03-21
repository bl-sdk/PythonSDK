#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUsableItemPartDefinition()
{
    class_< UUsableItemPartDefinition, bases< UItemPartDefinition >  , boost::noncopyable>("UUsableItemPartDefinition", no_init)
        .def("StaticClass", &UUsableItemPartDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnUsed", &UUsableItemPartDefinition::OnUsed)
        .staticmethod("StaticClass")
  ;
}