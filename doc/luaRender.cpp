/**
 * \defgroup Render
 * Module that handles 3D rendering.
 */ 

class Render {
	
	public:

		/**
		 * Create a vertex.
		 * \ingroup Render
		 *
		 * @par Usage example:
		 * @code
		 * v = Render.createVertex(1.0, 1.0, 0.0, 0.0, 0.5, 1.0, 1.0, 1.0)
		 * @endcode
		 *
		 * @param x - X coordinate of the vertex.
		 * @param y - Y coordinate of the vertex.
		 * @param z - Z coordinate of the vertex.
		 * @param u - U coordinate for texture mapping.
		 * @param v - v coordinate for texture mapping.
		 * @param n1 - Normal X coordinate of the vertex.
		 * @param n2 - Normal Y coordinate of the vertex.
		 * @param n3 - Normal Z coordinate of the vertex.
		 *
		 * @return The created vertex ID.
		 */
		int createVertex(number x, number y, number z, number u, number v, number n1, number n2, number n3);
		
		/**
		 * Destroy a vertex.
		 * \ingroup Render
		 *
		 * @par Usage example:
		 * @code
		 * v = Render.createVertex(1.0, 1.0, 0.0, 0.0, 0.5, 1.0, 1.0, 1.0)
		 * @endcode
		 *
		 * @param v - Vertex ID created with Render.createVertex to destroy.
		 */
		void destroyVertex(int v);
		
		/**
		 * Load a set of vertices as 3D model.
		 * \ingroup Render
		 *
		 * @par Usage example:
		 * @code
		 * texture = Graphics.loadImasge("app0:/texture.png")
		 * mdl = Render.loadModel(vertices_table, texture)
		 * @endcode
		 *
		 * @param v - A table with the model vertices.
		 * @param texture - Texture ID to use.
		 *
		 * @return A valid model ID.
		 */
		int loadModel(table v, int texture);
		
		/**
		 * Load an .obj model.
		 * \ingroup Render
		 *
		 * @par Usage example:
		 * @code
		 * texture = Graphics.loadImasge("app0:/texture.png")
		 * mdl = Render.loadObject("app0:/model.obj", texture)
		 * @endcode
		 *
		 * @param filename - Name of the file to load.
		 * @param texture - Texture ID to use.
		 *
		 * @return A valid model ID.
		 */
		int loadObject(string filename, int texture);
		
		/**
		 * Free a model.
		 * \ingroup Render
		 *
		 * @par Usage example:
		 * @code
		 * Render.unloadModel(mdl)
		 * @endcode
		 *
		 * @param model - A valid model ID.
		 *
		 * @note The texture is not unloaded automatically.
		 */
		void unloadModel(int model);
		
		/**
		 * Print a model on screen.
		 * \ingroup Render
		 *
		 * @par Usage example:
		 * @code
		 * Render.drawModel(mdl, 1.0, 1.0, -5.0, 1.0, 1.0)
		 * @endcode
		 *
		 * @param model - A valid model ID.
		 * @param x - X coordinate of the model.
		 * @param y - Y coordinate of the model.
		 * @param z - Z coordinate of the model.
		 * @param angleX - X rotation value of the model.
		 * @param angleY - Y rotation value of the model.
		 */
		void drawModel(int model, number x, number y, number z, number angleX, number angleY);
		
		/**
		 * Set a given texture for a model.
		 * \ingroup Render
		 *
		 * @par Usage example:
		 * @code
		 * texture = Graphics.loadImasge("app0:/texture.png")
		 * Render.useTexture(mdl, texture)
		 * @endcode
		 *
		 * @param model - A valid model ID.
		 * @param texture - Texture ID to use.
		 */
		void useTexture(int model, int texture);

}