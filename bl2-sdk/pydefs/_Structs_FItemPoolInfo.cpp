#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FItemPoolInfo()
{
    class_< FItemPoolInfo >("FItemPoolInfo", no_init)
        .def_readwrite("ItemPool", &FItemPoolInfo::ItemPool)
        .def_readwrite("PoolProbability", &FItemPoolInfo::PoolProbability)
  ;
}