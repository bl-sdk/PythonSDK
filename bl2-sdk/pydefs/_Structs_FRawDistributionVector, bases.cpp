#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRawDistributionVector()
{
    class_< FRawDistributionVector, bases< FRawDistribution >  >("FRawDistributionVector", no_init)
        .def_readwrite("Distribution", &FRawDistributionVector::Distribution)
  ;
}