#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCoverExposureData()
{
    class_< FCoverExposureData >("FCoverExposureData", no_init)
  ;
}