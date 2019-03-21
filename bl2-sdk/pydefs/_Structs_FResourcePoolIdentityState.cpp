#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FResourcePoolIdentityState()
{
    class_< FResourcePoolIdentityState >("FResourcePoolIdentityState", no_init)
        .def_readwrite("PoolDefinition", &FResourcePoolIdentityState::PoolDefinition)
        .def_readwrite("PoolGUID", &FResourcePoolIdentityState::PoolGUID)
  ;
}