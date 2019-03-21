#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UExplosionCollectionDefinition()
{
    class_< UExplosionCollectionDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UExplosionCollectionDefinition", no_init)
        .def_readwrite("Explosions", &UExplosionCollectionDefinition::Explosions)
        .def("StaticClass", &UExplosionCollectionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetExplosion", &UExplosionCollectionDefinition::GetExplosion, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}