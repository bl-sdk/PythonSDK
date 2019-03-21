#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNxDestructibleDepthParameters()
{
    class_< FNxDestructibleDepthParameters >("FNxDestructibleDepthParameters", no_init)
  ;
}