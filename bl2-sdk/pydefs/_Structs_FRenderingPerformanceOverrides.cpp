#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRenderingPerformanceOverrides()
{
    class_< FRenderingPerformanceOverrides >("FRenderingPerformanceOverrides", no_init)
  ;
}