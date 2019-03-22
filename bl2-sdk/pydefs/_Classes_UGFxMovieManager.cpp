#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieManager(py::module &m)
{
    py::class_< UGFxMovieManager,  UObject   >(m, "UGFxMovieManager")
        .def_readwrite("Subscribers", &UGFxMovieManager::Subscribers)
        .def_readwrite("MoviePools", &UGFxMovieManager::MoviePools)
        .def("ChangeMovieState", &UGFxMovieManager::ChangeMovieState)
        .def("Unsubscribe", &UGFxMovieManager::Unsubscribe)
        .def("Subscribe", &UGFxMovieManager::Subscribe)
        .def("UnregisterMoviesDrawnTo", &UGFxMovieManager::UnregisterMoviesDrawnTo)
        .def("UnregisterTarget", &UGFxMovieManager::UnregisterTarget)
        .def("UnregisterMovie", &UGFxMovieManager::UnregisterMovie)
        .def("RegisterMovie", &UGFxMovieManager::RegisterMovie)
          ;
}