#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGestaltPartMatricesCollectionDefinition()
{
    class_< UGestaltPartMatricesCollectionDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UGestaltPartMatricesCollectionDefinition", no_init)
        .def_readwrite("Collection", &UGestaltPartMatricesCollectionDefinition::Collection)
        .def("StaticClass", &UGestaltPartMatricesCollectionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}