#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMaterialViewRelevance()
{
    class_< FMaterialViewRelevance >("FMaterialViewRelevance", no_init)
  ;
}