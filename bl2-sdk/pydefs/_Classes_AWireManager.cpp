#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWireManager()
{
    class_< AWireManager, bases< AActor >  , boost::noncopyable>("AWireManager", no_init)
        .def_readwrite("DefaultMaterial", &AWireManager::DefaultMaterial)
        .def("StaticClass", &AWireManager::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}