#include <string>
#include <boost/python.hpp>
#include <boost/python/extract.hpp>


#include <cuv_general.hpp>
#include <random/random.hpp>

using namespace boost::python;
using namespace cuv;

void export_vector();
void export_vector_ops();
void export_dense_matrix();
void export_matrix_ops();
void export_random();
void export_dia_matrix();

BOOST_PYTHON_MODULE(cuv_python){
	def("initCUDA", initCUDA);
	def("exitCUDA", exitCUDA);
	def("initialize_mersenne_twister_seeds", initialize_mersenne_twister_seeds);
	export_vector();
	export_vector_ops();
	export_dense_matrix();
	export_matrix_ops();
	export_random();
	export_dia_matrix();
}
