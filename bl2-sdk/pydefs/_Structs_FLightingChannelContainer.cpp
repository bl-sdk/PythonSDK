#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLightingChannelContainer()
{
    class_< FLightingChannelContainer >("FLightingChannelContainer", no_init)
  ;
}