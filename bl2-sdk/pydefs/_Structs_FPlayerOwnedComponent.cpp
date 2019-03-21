#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerOwnedComponent()
{
    class_< FPlayerOwnedComponent >("FPlayerOwnedComponent", no_init)
        .def_readwrite("PlayerOwner", &FPlayerOwnedComponent::PlayerOwner)
        .def_readwrite("Component", &FPlayerOwnedComponent::Component)
  ;
}