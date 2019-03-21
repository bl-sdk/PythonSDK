#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowReplicatedInventoryManager()
{
    class_< AWillowReplicatedInventoryManager, bases< AWillowInventoryManager >  , boost::noncopyable>("AWillowReplicatedInventoryManager", no_init)
        .def("StaticClass", &AWillowReplicatedInventoryManager::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}