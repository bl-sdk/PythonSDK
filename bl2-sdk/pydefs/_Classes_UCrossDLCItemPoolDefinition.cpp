#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCrossDLCItemPoolDefinition()
{
    class_< UCrossDLCItemPoolDefinition, bases< UItemPoolDefinition >  , boost::noncopyable>("UCrossDLCItemPoolDefinition", no_init)
        .def_readwrite("BalancedItemsMirror", &UCrossDLCItemPoolDefinition::BalancedItemsMirror)
        .def("StaticClass", &UCrossDLCItemPoolDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}