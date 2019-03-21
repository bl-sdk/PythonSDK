#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRBCollisionChannelContainer()
{
    class_< FRBCollisionChannelContainer >("FRBCollisionChannelContainer", no_init)
  ;
}