# C - Binary Trees

Ce dossier contient des fonctions écrites en C pour manipuler des **arbres binaires**.  
Ce projet s’inscrit dans le programme Holberton School et couvre les bases essentielles des structures d’arbres, la création, la manipulation, les parcours et la gestion mémoire associée.

---

📄 **Fichiers et descriptions**

| Fichier | Description |
|---------|-------------|
| [`0-binary_tree_node.c`](./0-binary_tree_node.c)         | Crée un nœud d’arbre binaire |
| [`1-binary_tree_insert_left.c`](./1-binary_tree_insert_left.c)   | Insère un nœud comme enfant gauche |
| [`2-binary_tree_insert_right.c`](./2-binary_tree_insert_right.c) | Insère un nœud comme enfant droit |
| [`3-binary_tree_delete.c`](./3-binary_tree_delete.c)             | Supprime tout un arbre binaire |
| [`4-binary_tree_is_leaf.c`](./4-binary_tree_is_leaf.c)           | Vérifie si un nœud est une feuille |
| [`5-binary_tree_is_root.c`](./5-binary_tree_is_root.c)           | Vérifie si un nœud est la racine |
| [`6-binary_tree_preorder.c`](./6-binary_tree_preorder.c)         | Parcours en pré-ordre |
| [`7-binary_tree_inorder.c`](./7-binary_tree_inorder.c)           | Parcours en ordre symétrique |
| [`8-binary_tree_postorder.c`](./8-binary_tree_postorder.c)       | Parcours en post-ordre |
| [`9-binary_tree_height.c`](./9-binary_tree_height.c)             | Mesure la hauteur d’un arbre |
| [`10-binary_tree_depth.c`](./10-binary_tree_depth.c)             | Mesure la profondeur d’un nœud |
| [`11-binary_tree_size.c`](./11-binary_tree_size.c)               | Mesure la taille d’un arbre |
| [`12-binary_tree_leaves.c`](./12-binary_tree_leaves.c)           | Compte le nombre de feuilles |
| [`13-binary_tree_nodes.c`](./13-binary_tree_nodes.c)             | Compte les nœuds ayant au moins un enfant |
| [`14-binary_tree_balance.c`](./14-binary_tree_balance.c)         | Mesure le facteur d’équilibre |
| [`15-binary_tree_is_full.c`](./15-binary_tree_is_full.c)         | Vérifie si un arbre est complet (full) |
| [`16-binary_tree_is_perfect.c`](./16-binary_tree_is_perfect.c)   | Vérifie si un arbre est parfait |
| [`17-binary_tree_sibling.c`](./17-binary_tree_sibling.c)         | Trouve le frère d’un nœud |
| [`18-binary_tree_uncle.c`](./18-binary_tree_uncle.c)             | Trouve l’oncle d’un nœud |

---

🧪 **Tests et comportement attendu**

Tous les fichiers peuvent être testés avec les `main.c` fournis en exemple.  
Par exemple, pour compiler et tester la création d’un nœud :

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
./0-node